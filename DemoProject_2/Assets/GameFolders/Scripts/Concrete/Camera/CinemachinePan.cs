using UnityEngine;
using Cinemachine;

public class CinemachinePan : MonoBehaviour
{
    [SerializeField] float _panSpeed = 2f;
    CinemachineInputProvider _inputProvider;
    CinemachineVirtualCamera _virtualCamera;
    Transform _cameraTransform;

    void OnValidate()
    {
        GetReference();
    }

    void Awake()
    {
        if (_inputProvider == null)
            GetReference();
        Cursor.lockState = CursorLockMode.None;
    }


    void Update()
    {
        float x = _inputProvider.GetAxisValue(0);
        float y = _inputProvider.GetAxisValue(1);
        if (x != 0 || y != 0)
        {
            PanScreen(x, y);
        }
    }

    public Vector2 PanDirection(float x, float y)
    {
        Vector2 direction = Vector2.zero;
        if (y >= Screen.height * .99f)
        {
            direction.y += 1;
        }

        else if (y <= Screen.height * .005f)
        {
            direction.y -= 1;
        }

        if (x >= Screen.width * 0.99f)
        {
            direction.x += 1;
        }
        else if (x <= Screen.width * .05f)
        {
            direction.x -= 1;
        }

        return direction;
    }

    public void PanScreen(float x, float y)
    {
        Vector2 direction = PanDirection(x, y);
        _cameraTransform.position =
            Vector3.Lerp(_cameraTransform.position, _cameraTransform.position + (Vector3)direction * _panSpeed,
                Time.deltaTime);
    }

    void GetReference()
    {
        _inputProvider = GetComponent<CinemachineInputProvider>();
        _virtualCamera = GetComponent<CinemachineVirtualCamera>();
        _cameraTransform = _virtualCamera.VirtualCameraGameObject.transform;
    }
}