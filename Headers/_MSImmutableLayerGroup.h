#import "MSImmutableStyledLayer.h"

@class MSImmutableArray, NSString;

@interface _MSImmutableLayerGroup : MSImmutableStyledLayer
{
    BOOL _hasClickThrough;
    MSImmutableArray *_layers;
    NSString *_sharedObjectID;
}

@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSImmutableArray *layers; // @synthesize layers=_layers;
@property(nonatomic) BOOL hasClickThrough; // @synthesize hasClickThrough=_hasClickThrough;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

