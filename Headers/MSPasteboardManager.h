#import "NSObject.h"

@class NSMutableArray;

@interface MSPasteboardManager : NSObject
{
    NSMutableArray *_readers;
    NSMutableArray *_writers;
}

+ (void)registerWriter:(id)arg1;
+ (void)registerReader:(id)arg1;
+ (void)writePasteboardLayers:(id)arg1 toPasteboard:(id)arg2;
+ (id)readPasteboardLayersFromDrag:(id)arg1;
+ (id)readPasteboardLayersFromPasteboard:(id)arg1;
+ (id)applicationPasteboardManager;
@property(retain, nonatomic) NSMutableArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSMutableArray *readers; // @synthesize readers=_readers;
- (void).cxx_destruct;
- (void)registerReader:(id)arg1;
- (void)registerWriter:(id)arg1;
- (void)writePasteboardLayers:(id)arg1 toPasteboard:(id)arg2;
- (id)readPasteboardLayersFromPasteboard:(id)arg1 sender:(id)arg2;
- (id)readPasteboardLayersFromPasteboard:(id)arg1;
- (id)readPasteboardLayersFromDrag:(id)arg1;
- (id)init;
- (void)registerDefaultReadersAndWriters;

@end

