#import "NSObject.h"

@class NSPasteboard;

@interface MSPasteboardHelper : NSObject
{
    id <MSBasicDelegate> _delegate;
    NSPasteboard *_pasteboard;
}

@property(retain, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

