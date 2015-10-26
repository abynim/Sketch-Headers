#import "_MSStyleFill.h"

#import "MSImageOwner.h"

@class NSString;

@interface MSStyleFill : _MSStyleFill <MSImageOwner>
{
    double _lightweightParentLayerCachedOpacity;
}

+ (id)defaultFillColor;
+ (id)keyPathsForValuesAffectingInterfaceOpacity;
@property(nonatomic) double lightweightParentLayerCachedOpacity; // @synthesize lightweightParentLayerCachedOpacity=_lightweightParentLayerCachedOpacity;
- (id)NSImage;
- (void)setOpacity:(double)arg1;
- (BOOL)hasOpacity;
- (void)setPatternTileScale:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setPatternImage:(id)arg1 collection:(id)arg2;
- (void)prepareObjectCopy:(id)arg1;
- (id)defaultName;
- (void)initEmptyObject;
- (id)topViewForColorInspector:(id)arg1;
- (id)CSSAttributeString;
- (id)parentStyle;
@property(nonatomic) double interfaceOpacity;
- (void)setPatternImage:(id)arg1;
- (void)addImageOwnersToSet:(id)arg1;
- (void)updateColorCounter:(id)arg1;
- (void)migratePropertiesFromV56OrEarlierWithCoder:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

