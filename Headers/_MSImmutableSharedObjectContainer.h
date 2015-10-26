#import "MSImmutableModelBase.h"

@class MSImmutableArray;

@interface _MSImmutableSharedObjectContainer : MSImmutableModelBase
{
    MSImmutableArray *_objects;
}

@property(retain, nonatomic) MSImmutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

