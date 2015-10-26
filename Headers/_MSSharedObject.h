#import "MSModelBase.h"

@class MSModelObject, NSString;

@interface _MSSharedObject : MSModelBase
{
    NSString *_name;
    MSModelObject *_value;
}

@property(retain, nonatomic) MSModelObject *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveValue:(id)arg1;
- (id)primitiveValue;
- (void)setPrimitiveName:(id)arg1;
- (id)primitiveName;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

