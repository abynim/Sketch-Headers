#import "MSModelBase.h"

@interface _MSStylePart : MSModelBase
{
    BOOL _isEnabled;
}

@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveIsEnabled:(BOOL)arg1;
- (BOOL)primitiveIsEnabled;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

