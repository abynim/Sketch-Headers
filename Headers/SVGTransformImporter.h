#import "NSObject.h"

@interface SVGTransformImporter : NSObject
{
}

+ (id)matrixTransformFromComponents:(id)arg1;
+ (id)rotateTransformFromComponents:(id)arg1;
+ (id)scaleTransformFromComponents:(id)arg1;
+ (id)translateTransformFromComponents:(id)arg1;
+ (id)transformFromName:(id)arg1 components:(id)arg2;
+ (id)transformFromString:(id)arg1;

@end

