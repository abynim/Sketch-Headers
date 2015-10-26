#import "NSObject.h"

@class NSPasteboard;

@interface MSLayersPasteboardHelper : NSObject
{
    NSPasteboard *_pasteboard;
}

+ (void)embedLayerInGroupIfNecessary:(id)arg1 selectedLayers:(id)arg2 defaultStyle:(id)arg3;
+ (id)layersFromPasteboardData:(id)arg1 selectedLayers:(id)arg2;
+ (void)relinkSharedObjectsInDocument:(id)arg1 inLayers:(id)arg2;
+ (void)mergeSharedObjectsIntoDocument:(id)arg1 fromDictionary:(id)arg2;
+ (id)readLayersFromPasteboardData:(id)arg1 intoGroup:(id)arg2 selectedLayers:(id)arg3 defaultStyle:(id)arg4 adjustmentBlock:(CDUnknownBlockType)arg5;
+ (BOOL)allLayers:(id)arg1 canBePastedIntoGroup:(id)arg2 symbols:(id)arg3;
+ (id)usedSharedObjectsInDocument:(id)arg1 layers:(id)arg2;
+ (id)imagesUsedInLayers:(id)arg1 fromImageCollection:(id)arg2;
+ (id)pasteboardDataForLayers:(id)arg1 fromDocument:(id)arg2;
@property(retain, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
- (void).cxx_destruct;
- (id)readLayersIntoGroup:(id)arg1 selectedLayers:(id)arg2 defaultStyle:(id)arg3 adjustmentBlock:(CDUnknownBlockType)arg4;
- (void)writeLayers:(id)arg1 fromDocument:(id)arg2;
- (id)initWithPasteboard:(id)arg1;

@end

