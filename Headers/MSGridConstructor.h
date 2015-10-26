#import "NSObject.h"

@class NSArray;

@interface MSGridConstructor : NSObject
{
    NSArray *_layers;
    CDStruct_24ee45cf _options;
}

@property(nonatomic) CDStruct_24ee45cf options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)duplicateLayers:(id)arg1;
- (id)makeAllLayers;
- (double)largestHeightInLayers:(id)arg1;
- (struct CGSize)sizeForLayer:(id)arg1;
- (void)makeGridWithLayers:(id)arg1 options:(CDStruct_24ee45cf)arg2;

@end

