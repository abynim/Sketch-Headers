#import "NSObject.h"

@class NSURL;

@interface MSFolderMonitor : NSObject
{
    struct __FSEventStream *_eventStream;
    NSURL *_folderURL;
    CDUnknownBlockType _contentsChangedBlock;
}

+ (id)folderMonitorWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType contentsChangedBlock; // @synthesize contentsChangedBlock=_contentsChangedBlock;
@property(copy, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;

@end

