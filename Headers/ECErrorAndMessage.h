#import "NSObject.h"

@class NSError, NSString;

@interface ECErrorAndMessage : NSObject
{
    NSString *_message;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;

@end

