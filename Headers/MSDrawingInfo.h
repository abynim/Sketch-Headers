#import "NSObject.h"

@interface MSDrawingInfo : NSObject
{
    BOOL _isDragging;
}

+ (id)sharedController;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;

@end

