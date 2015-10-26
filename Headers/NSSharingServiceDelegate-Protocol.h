#import "NSObject.h"

@class NSArray, NSError, NSImage, NSSharingService, NSWindow;

@protocol NSSharingServiceDelegate <NSObject>

@optional
- (NSWindow *)sharingService:(NSSharingService *)arg1 sourceWindowForShareItems:(NSArray *)arg2 sharingContentScope:(long long *)arg3;
- (NSImage *)sharingService:(NSSharingService *)arg1 transitionImageForShareItem:(id <NSPasteboardWriting>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(NSSharingService *)arg1 sourceFrameOnScreenForShareItem:(id <NSPasteboardWriting>)arg2;
- (void)sharingService:(NSSharingService *)arg1 didShareItems:(NSArray *)arg2;
- (void)sharingService:(NSSharingService *)arg1 didFailToShareItems:(NSArray *)arg2 error:(NSError *)arg3;
- (void)sharingService:(NSSharingService *)arg1 willShareItems:(NSArray *)arg2;
@end

