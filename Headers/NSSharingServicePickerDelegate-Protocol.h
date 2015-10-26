#import "NSObject.h"

@class NSArray, NSSharingService, NSSharingServicePicker;

@protocol NSSharingServicePickerDelegate <NSObject>

@optional
- (void)sharingServicePicker:(NSSharingServicePicker *)arg1 didChooseSharingService:(NSSharingService *)arg2;
- (id <NSSharingServiceDelegate>)sharingServicePicker:(NSSharingServicePicker *)arg1 delegateForSharingService:(NSSharingService *)arg2;
- (NSArray *)sharingServicePicker:(NSSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
@end

