#import "NSObject.h"

@class MSLayerGroup, MSSharedLayer;

@interface MSSymbolResult : NSObject
{
    MSLayerGroup *_layer;
    MSSharedLayer *_symbol;
}

@property(retain, nonatomic) MSSharedLayer *symbol; // @synthesize symbol=_symbol;
@property(retain, nonatomic) MSLayerGroup *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;

@end

