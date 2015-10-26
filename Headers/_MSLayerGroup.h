#import "MSStyledLayer.h"

@class MSArray, NSString;

@interface _MSLayerGroup : MSStyledLayer
{
    BOOL _hasClickThrough;
    MSArray *_layers;
    NSString *_sharedObjectID;
}

@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) BOOL hasClickThrough; // @synthesize hasClickThrough=_hasClickThrough;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveSharedObjectID:(id)arg1;
- (id)primitiveSharedObjectID;
- (void)setPrimitiveLayers:(id)arg1;
- (id)primitiveLayers;
- (void)setPrimitiveHasClickThrough:(BOOL)arg1;
- (BOOL)primitiveHasClickThrough;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

