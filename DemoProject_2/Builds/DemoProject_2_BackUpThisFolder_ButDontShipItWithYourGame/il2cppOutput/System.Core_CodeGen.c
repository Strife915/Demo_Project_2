#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_m6CFB29419B6AA641B9684009696F318F19AFBE4B (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000011 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000021 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000024 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000025 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000029 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002E System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004C System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004D System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004E TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000051 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000054 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000056 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000057 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000058 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000059 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000005D TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000063 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x0000007C System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x0000007D System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x0000007E System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x0000007F System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x00000080 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x00000081 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x00000082 System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x00000083 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000084 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000085 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x00000086 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000008E System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000093 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000094 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000095 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000009C System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000A3 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000A4 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A8 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A9 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[170] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	Error_NoMatch_m6CFB29419B6AA641B9684009696F318F19AFBE4B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[170] = 
{
	5389,
	5861,
	6149,
	6149,
	6149,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3906,
	6178,
	5861,
	3927,
	3927,
	3927,
	5861,
	3927,
	-1,
	-1,
	6149,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[54] = 
{
	{ 0x02000005, { 87, 4 } },
	{ 0x02000006, { 91, 9 } },
	{ 0x02000007, { 102, 7 } },
	{ 0x02000008, { 111, 10 } },
	{ 0x02000009, { 123, 11 } },
	{ 0x0200000A, { 137, 9 } },
	{ 0x0200000B, { 149, 12 } },
	{ 0x0200000C, { 164, 1 } },
	{ 0x0200000D, { 165, 2 } },
	{ 0x0200000E, { 167, 12 } },
	{ 0x0200000F, { 179, 6 } },
	{ 0x02000010, { 185, 2 } },
	{ 0x02000012, { 187, 3 } },
	{ 0x02000013, { 192, 5 } },
	{ 0x02000014, { 197, 7 } },
	{ 0x02000015, { 204, 3 } },
	{ 0x02000016, { 207, 7 } },
	{ 0x02000017, { 214, 4 } },
	{ 0x02000024, { 218, 3 } },
	{ 0x02000027, { 221, 34 } },
	{ 0x02000029, { 255, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 2 } },
	{ 0x0600000D, { 35, 1 } },
	{ 0x0600000E, { 36, 3 } },
	{ 0x0600000F, { 39, 2 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 7 } },
	{ 0x06000012, { 49, 1 } },
	{ 0x06000013, { 50, 2 } },
	{ 0x06000014, { 52, 4 } },
	{ 0x06000015, { 56, 3 } },
	{ 0x06000016, { 59, 4 } },
	{ 0x06000017, { 63, 4 } },
	{ 0x06000018, { 67, 3 } },
	{ 0x06000019, { 70, 1 } },
	{ 0x0600001A, { 71, 1 } },
	{ 0x0600001B, { 72, 3 } },
	{ 0x0600001C, { 75, 3 } },
	{ 0x0600001D, { 78, 2 } },
	{ 0x0600001E, { 80, 2 } },
	{ 0x0600001F, { 82, 5 } },
	{ 0x0600002F, { 100, 2 } },
	{ 0x06000034, { 109, 2 } },
	{ 0x06000039, { 121, 2 } },
	{ 0x0600003F, { 134, 3 } },
	{ 0x06000044, { 146, 3 } },
	{ 0x06000049, { 161, 3 } },
	{ 0x06000067, { 190, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[257] = 
{
	{ (Il2CppRGCTXDataType)2, 2583 },
	{ (Il2CppRGCTXDataType)3, 12980 },
	{ (Il2CppRGCTXDataType)2, 4259 },
	{ (Il2CppRGCTXDataType)2, 3649 },
	{ (Il2CppRGCTXDataType)3, 24561 },
	{ (Il2CppRGCTXDataType)2, 2715 },
	{ (Il2CppRGCTXDataType)2, 3656 },
	{ (Il2CppRGCTXDataType)3, 24605 },
	{ (Il2CppRGCTXDataType)2, 3651 },
	{ (Il2CppRGCTXDataType)3, 24577 },
	{ (Il2CppRGCTXDataType)2, 2584 },
	{ (Il2CppRGCTXDataType)3, 12981 },
	{ (Il2CppRGCTXDataType)2, 4298 },
	{ (Il2CppRGCTXDataType)2, 3661 },
	{ (Il2CppRGCTXDataType)3, 24624 },
	{ (Il2CppRGCTXDataType)2, 2736 },
	{ (Il2CppRGCTXDataType)2, 3669 },
	{ (Il2CppRGCTXDataType)3, 24788 },
	{ (Il2CppRGCTXDataType)2, 3665 },
	{ (Il2CppRGCTXDataType)3, 24699 },
	{ (Il2CppRGCTXDataType)2, 864 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)3, 9289 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)3, 50 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)3, 9297 },
	{ (Il2CppRGCTXDataType)3, 28590 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)2, 3247 },
	{ (Il2CppRGCTXDataType)3, 19748 },
	{ (Il2CppRGCTXDataType)3, 10403 },
	{ (Il2CppRGCTXDataType)2, 1054 },
	{ (Il2CppRGCTXDataType)3, 1393 },
	{ (Il2CppRGCTXDataType)3, 1394 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)3, 13919 },
	{ (Il2CppRGCTXDataType)3, 28616 },
	{ (Il2CppRGCTXDataType)2, 1185 },
	{ (Il2CppRGCTXDataType)3, 2748 },
	{ (Il2CppRGCTXDataType)2, 1977 },
	{ (Il2CppRGCTXDataType)2, 2100 },
	{ (Il2CppRGCTXDataType)3, 9295 },
	{ (Il2CppRGCTXDataType)3, 9296 },
	{ (Il2CppRGCTXDataType)3, 2749 },
	{ (Il2CppRGCTXDataType)3, 28561 },
	{ (Il2CppRGCTXDataType)2, 875 },
	{ (Il2CppRGCTXDataType)3, 150 },
	{ (Il2CppRGCTXDataType)2, 2342 },
	{ (Il2CppRGCTXDataType)2, 1831 },
	{ (Il2CppRGCTXDataType)2, 1954 },
	{ (Il2CppRGCTXDataType)2, 2091 },
	{ (Il2CppRGCTXDataType)2, 1955 },
	{ (Il2CppRGCTXDataType)2, 2092 },
	{ (Il2CppRGCTXDataType)3, 9290 },
	{ (Il2CppRGCTXDataType)2, 2343 },
	{ (Il2CppRGCTXDataType)2, 1832 },
	{ (Il2CppRGCTXDataType)2, 1956 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)2, 2344 },
	{ (Il2CppRGCTXDataType)2, 1833 },
	{ (Il2CppRGCTXDataType)2, 1957 },
	{ (Il2CppRGCTXDataType)2, 2094 },
	{ (Il2CppRGCTXDataType)2, 1958 },
	{ (Il2CppRGCTXDataType)2, 2095 },
	{ (Il2CppRGCTXDataType)3, 9291 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)2, 1944 },
	{ (Il2CppRGCTXDataType)2, 1945 },
	{ (Il2CppRGCTXDataType)2, 2089 },
	{ (Il2CppRGCTXDataType)3, 9288 },
	{ (Il2CppRGCTXDataType)2, 1943 },
	{ (Il2CppRGCTXDataType)2, 2088 },
	{ (Il2CppRGCTXDataType)3, 9287 },
	{ (Il2CppRGCTXDataType)2, 1830 },
	{ (Il2CppRGCTXDataType)2, 1953 },
	{ (Il2CppRGCTXDataType)2, 1829 },
	{ (Il2CppRGCTXDataType)3, 28530 },
	{ (Il2CppRGCTXDataType)3, 8498 },
	{ (Il2CppRGCTXDataType)2, 1483 },
	{ (Il2CppRGCTXDataType)2, 1947 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)2, 2211 },
	{ (Il2CppRGCTXDataType)3, 12982 },
	{ (Il2CppRGCTXDataType)3, 12984 },
	{ (Il2CppRGCTXDataType)2, 645 },
	{ (Il2CppRGCTXDataType)3, 12983 },
	{ (Il2CppRGCTXDataType)3, 12992 },
	{ (Il2CppRGCTXDataType)2, 2587 },
	{ (Il2CppRGCTXDataType)2, 3652 },
	{ (Il2CppRGCTXDataType)3, 24578 },
	{ (Il2CppRGCTXDataType)3, 12993 },
	{ (Il2CppRGCTXDataType)2, 2009 },
	{ (Il2CppRGCTXDataType)2, 2127 },
	{ (Il2CppRGCTXDataType)3, 9305 },
	{ (Il2CppRGCTXDataType)3, 28495 },
	{ (Il2CppRGCTXDataType)2, 3666 },
	{ (Il2CppRGCTXDataType)3, 24700 },
	{ (Il2CppRGCTXDataType)3, 12985 },
	{ (Il2CppRGCTXDataType)2, 2586 },
	{ (Il2CppRGCTXDataType)2, 3650 },
	{ (Il2CppRGCTXDataType)3, 24562 },
	{ (Il2CppRGCTXDataType)3, 9304 },
	{ (Il2CppRGCTXDataType)3, 12986 },
	{ (Il2CppRGCTXDataType)3, 28494 },
	{ (Il2CppRGCTXDataType)2, 3662 },
	{ (Il2CppRGCTXDataType)3, 24625 },
	{ (Il2CppRGCTXDataType)3, 12999 },
	{ (Il2CppRGCTXDataType)2, 2588 },
	{ (Il2CppRGCTXDataType)2, 3657 },
	{ (Il2CppRGCTXDataType)3, 24606 },
	{ (Il2CppRGCTXDataType)3, 13981 },
	{ (Il2CppRGCTXDataType)3, 7006 },
	{ (Il2CppRGCTXDataType)3, 9306 },
	{ (Il2CppRGCTXDataType)3, 7005 },
	{ (Il2CppRGCTXDataType)3, 13000 },
	{ (Il2CppRGCTXDataType)3, 28496 },
	{ (Il2CppRGCTXDataType)2, 3670 },
	{ (Il2CppRGCTXDataType)3, 24789 },
	{ (Il2CppRGCTXDataType)3, 13013 },
	{ (Il2CppRGCTXDataType)2, 2590 },
	{ (Il2CppRGCTXDataType)2, 3668 },
	{ (Il2CppRGCTXDataType)3, 24702 },
	{ (Il2CppRGCTXDataType)3, 13014 },
	{ (Il2CppRGCTXDataType)2, 2012 },
	{ (Il2CppRGCTXDataType)2, 2130 },
	{ (Il2CppRGCTXDataType)3, 9310 },
	{ (Il2CppRGCTXDataType)3, 9309 },
	{ (Il2CppRGCTXDataType)2, 3654 },
	{ (Il2CppRGCTXDataType)3, 24580 },
	{ (Il2CppRGCTXDataType)3, 28502 },
	{ (Il2CppRGCTXDataType)2, 3667 },
	{ (Il2CppRGCTXDataType)3, 24701 },
	{ (Il2CppRGCTXDataType)3, 13006 },
	{ (Il2CppRGCTXDataType)2, 2589 },
	{ (Il2CppRGCTXDataType)2, 3664 },
	{ (Il2CppRGCTXDataType)3, 24627 },
	{ (Il2CppRGCTXDataType)3, 9308 },
	{ (Il2CppRGCTXDataType)3, 9307 },
	{ (Il2CppRGCTXDataType)3, 13007 },
	{ (Il2CppRGCTXDataType)2, 3653 },
	{ (Il2CppRGCTXDataType)3, 24579 },
	{ (Il2CppRGCTXDataType)3, 28501 },
	{ (Il2CppRGCTXDataType)2, 3663 },
	{ (Il2CppRGCTXDataType)3, 24626 },
	{ (Il2CppRGCTXDataType)3, 13020 },
	{ (Il2CppRGCTXDataType)2, 2591 },
	{ (Il2CppRGCTXDataType)2, 3672 },
	{ (Il2CppRGCTXDataType)3, 24791 },
	{ (Il2CppRGCTXDataType)3, 13982 },
	{ (Il2CppRGCTXDataType)3, 7008 },
	{ (Il2CppRGCTXDataType)3, 9312 },
	{ (Il2CppRGCTXDataType)3, 9311 },
	{ (Il2CppRGCTXDataType)3, 7007 },
	{ (Il2CppRGCTXDataType)3, 13021 },
	{ (Il2CppRGCTXDataType)2, 3655 },
	{ (Il2CppRGCTXDataType)3, 24581 },
	{ (Il2CppRGCTXDataType)3, 28503 },
	{ (Il2CppRGCTXDataType)2, 3671 },
	{ (Il2CppRGCTXDataType)3, 24790 },
	{ (Il2CppRGCTXDataType)3, 9301 },
	{ (Il2CppRGCTXDataType)3, 9302 },
	{ (Il2CppRGCTXDataType)3, 9316 },
	{ (Il2CppRGCTXDataType)3, 186 },
	{ (Il2CppRGCTXDataType)3, 185 },
	{ (Il2CppRGCTXDataType)2, 2004 },
	{ (Il2CppRGCTXDataType)2, 2123 },
	{ (Il2CppRGCTXDataType)3, 9303 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)2, 2149 },
	{ (Il2CppRGCTXDataType)3, 188 },
	{ (Il2CppRGCTXDataType)2, 813 },
	{ (Il2CppRGCTXDataType)2, 880 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)3, 187 },
	{ (Il2CppRGCTXDataType)3, 152 },
	{ (Il2CppRGCTXDataType)2, 642 },
	{ (Il2CppRGCTXDataType)3, 154 },
	{ (Il2CppRGCTXDataType)2, 876 },
	{ (Il2CppRGCTXDataType)3, 151 },
	{ (Il2CppRGCTXDataType)3, 153 },
	{ (Il2CppRGCTXDataType)2, 4307 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)2, 873 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)3, 19733 },
	{ (Il2CppRGCTXDataType)2, 3248 },
	{ (Il2CppRGCTXDataType)3, 19749 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)3, 1395 },
	{ (Il2CppRGCTXDataType)3, 19739 },
	{ (Il2CppRGCTXDataType)3, 6975 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)3, 19734 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)3, 1888 },
	{ (Il2CppRGCTXDataType)2, 1097 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)3, 6981 },
	{ (Il2CppRGCTXDataType)3, 19735 },
	{ (Il2CppRGCTXDataType)3, 6970 },
	{ (Il2CppRGCTXDataType)3, 6971 },
	{ (Il2CppRGCTXDataType)3, 6969 },
	{ (Il2CppRGCTXDataType)3, 6972 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)2, 4358 },
	{ (Il2CppRGCTXDataType)3, 9299 },
	{ (Il2CppRGCTXDataType)3, 6974 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)3, 6973 },
	{ (Il2CppRGCTXDataType)2, 1835 },
	{ (Il2CppRGCTXDataType)2, 4303 },
	{ (Il2CppRGCTXDataType)2, 1978 },
	{ (Il2CppRGCTXDataType)2, 2101 },
	{ (Il2CppRGCTXDataType)3, 1406 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)2, 4361 },
	{ (Il2CppRGCTXDataType)3, 8519 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)3, 10154 },
	{ (Il2CppRGCTXDataType)3, 10155 },
	{ (Il2CppRGCTXDataType)2, 1794 },
	{ (Il2CppRGCTXDataType)3, 10158 },
	{ (Il2CppRGCTXDataType)2, 1794 },
	{ (Il2CppRGCTXDataType)3, 10159 },
	{ (Il2CppRGCTXDataType)2, 1836 },
	{ (Il2CppRGCTXDataType)3, 10163 },
	{ (Il2CppRGCTXDataType)3, 10167 },
	{ (Il2CppRGCTXDataType)3, 10166 },
	{ (Il2CppRGCTXDataType)2, 4393 },
	{ (Il2CppRGCTXDataType)3, 10157 },
	{ (Il2CppRGCTXDataType)3, 10156 },
	{ (Il2CppRGCTXDataType)3, 10164 },
	{ (Il2CppRGCTXDataType)2, 2219 },
	{ (Il2CppRGCTXDataType)3, 10161 },
	{ (Il2CppRGCTXDataType)3, 29331 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)3, 6996 },
	{ (Il2CppRGCTXDataType)1, 1915 },
	{ (Il2CppRGCTXDataType)2, 4315 },
	{ (Il2CppRGCTXDataType)3, 10160 },
	{ (Il2CppRGCTXDataType)1, 4315 },
	{ (Il2CppRGCTXDataType)1, 2219 },
	{ (Il2CppRGCTXDataType)2, 4393 },
	{ (Il2CppRGCTXDataType)2, 4315 },
	{ (Il2CppRGCTXDataType)2, 1981 },
	{ (Il2CppRGCTXDataType)2, 2104 },
	{ (Il2CppRGCTXDataType)3, 10165 },
	{ (Il2CppRGCTXDataType)3, 10162 },
	{ (Il2CppRGCTXDataType)3, 10168 },
	{ (Il2CppRGCTXDataType)2, 508 },
	{ (Il2CppRGCTXDataType)3, 7009 },
	{ (Il2CppRGCTXDataType)2, 659 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	170,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	54,
	s_rgctxIndices,
	257,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
