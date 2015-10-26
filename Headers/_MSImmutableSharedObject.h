#import "MSImmutableModelBase.h"

@class MSModelObject, NSString;

@interface _MSImmutableSharedObject : MSImmutableModelBase
{
    NSString *_name;
    MSModelObject *_value;
}

@property(retain, nonatomic) MSModelObject *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

