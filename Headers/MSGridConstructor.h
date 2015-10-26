#import "NSObject.h"

@class NSArray;

@interface MSGridConstructor : NSObject
{
    NSArray *_layers;
    CDStruct_2889ab50 _options;
}

@property(nonatomic) CDStruct_2889ab50 options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)duplicateLayers:(id)arg1;
- (id)makeAllLayers;
- (double)largestHeightInLayers:(id)arg1;
- (struct CGSize)sizeForLayer:(id)arg1;
- (void)makeGridWithLayers:(id)arg1 options:(CDStruct_2889ab50)arg2;

@end

