#import "NSObject.h"

@interface MSTransparencyLayerSavedState : NSObject
{
    BOOL _shouldFlip;
    struct CGContext *_contextRef;
    struct CGRect _deviceRect;
}

@property(nonatomic) BOOL shouldFlip; // @synthesize shouldFlip=_shouldFlip;
@property(nonatomic) struct CGRect deviceRect; // @synthesize deviceRect=_deviceRect;
@property(nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;

@end

