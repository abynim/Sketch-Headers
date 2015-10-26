#import "NSObject.h"

#import "MSLayerTraits.h"

@class MSLayerArray, NSDictionary, NSString;

@interface MSPasteboardLayers : NSObject <MSLayerTraits>
{
    MSLayerArray *_layers;
    NSDictionary *_indexedImages;
    NSDictionary *_sharedObjects;
    unsigned long long _parentTraits;
    struct CGPoint _suggestedPosition;
}

+ (struct CGPoint)originForLayer:(id)arg1 rootIsPage:(BOOL)arg2;
+ (struct CGPoint)suggestedOriginForLayers:(id)arg1 rootIsPage:(BOOL)arg2;
+ (unsigned long long)parentTraitsForLayers:(id)arg1;
+ (id)pasteboardLayersWithLayers:(id)arg1;
+ (id)pasteboardLayersWithForeignLayers:(id)arg1;
+ (unsigned long long)traits;
@property(nonatomic) unsigned long long parentTraits; // @synthesize parentTraits=_parentTraits;
@property(nonatomic) struct CGPoint suggestedPosition; // @synthesize suggestedPosition=_suggestedPosition;
@property(retain, nonatomic) NSDictionary *sharedObjects; // @synthesize sharedObjects=_sharedObjects;
@property(retain, nonatomic) NSDictionary *indexedImages; // @synthesize indexedImages=_indexedImages;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (struct CGRect)suggestedRect;
- (id)insertInGroup:(id)arg1 atPosition:(struct CGPoint)arg2 afterLayer:(id)arg3;
- (id)insertOnPage:(id)arg1 viewport:(id)arg2 hint:(id)arg3;
- (id)layerPositionsRelativeToUnion;
- (struct CGSize)unionSize;
- (BOOL)canBeContainedInLayer:(id)arg1;
- (unsigned long long)traits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

