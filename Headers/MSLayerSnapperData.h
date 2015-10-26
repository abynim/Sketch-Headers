#import "NSObject.h"

@class NSMutableArray;

@interface MSLayerSnapperData : NSObject
{
    NSMutableArray *_horizontalLines;
    NSMutableArray *_verticalLines;
    NSMutableArray *_widthLayers;
    NSMutableArray *_heightLayers;
    NSMutableArray *_distanceWidths;
    NSMutableArray *_distanceHeights;
}

@property(retain, nonatomic) NSMutableArray *distanceHeights; // @synthesize distanceHeights=_distanceHeights;
@property(retain, nonatomic) NSMutableArray *distanceWidths; // @synthesize distanceWidths=_distanceWidths;
@property(retain, nonatomic) NSMutableArray *heightLayers; // @synthesize heightLayers=_heightLayers;
@property(retain, nonatomic) NSMutableArray *widthLayers; // @synthesize widthLayers=_widthLayers;
@property(retain, nonatomic) NSMutableArray *verticalLines; // @synthesize verticalLines=_verticalLines;
@property(retain, nonatomic) NSMutableArray *horizontalLines; // @synthesize horizontalLines=_horizontalLines;
- (void).cxx_destruct;
- (void)refreshWithDelegate:(id)arg1;
- (id)init;

@end

