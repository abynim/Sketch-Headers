#import "NSObject.h"

@class MSDocument;

@interface MSDebugStressTestRendering : NSObject
{
    MSDocument *_document;
}

+ (void)stressTestDocument:(id)arg1;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)findRandomParent;
- (id)findRandomLayer;
- (void)runInBackground;
- (void)run;

@end

