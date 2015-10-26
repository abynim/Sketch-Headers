#import "NSObject.h"

@class NSArray, NSPasteboard, NSString;

@protocol NSPasteboardWriting <NSObject>
- (id)pasteboardPropertyListForType:(NSString *)arg1;
- (NSArray *)writableTypesForPasteboard:(NSPasteboard *)arg1;

@optional
- (unsigned long long)writingOptionsForType:(NSString *)arg1 pasteboard:(NSPasteboard *)arg2;
@end

