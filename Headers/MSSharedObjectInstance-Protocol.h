#import "NSObject.h"

@class NSString;

@protocol MSSharedObjectInstance <NSObject>
@property(retain, nonatomic) NSString *sharedObjectID;
- (void)setPrimitiveSharedObjectID:(NSString *)arg1;
- (unsigned long long)type;
@end

