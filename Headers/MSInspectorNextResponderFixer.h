#import "NSObject.h"

@interface MSInspectorNextResponderFixer : NSObject
{
}

+ (long long)compareVerticalPositionOfView:(id)arg1 withView:(id)arg2;
+ (long long)compareHorizontalPositionOfView:(id)arg1 withView:(id)arg2;
+ (struct _NSRange)verticalRangeFromView:(id)arg1 inView:(id)arg2;
+ (BOOL)viewIntersectsVertically:(id)arg1 withView:(id)arg2;
+ (id)subviewsOfView:(id)arg1;
+ (id)orderedSubviewsOfView:(id)arg1;
+ (BOOL)viewCanBeNextKeyView:(id)arg1;
+ (id)firstKeyViewForInView:(id)arg1;
+ (id)findNextKeyViewFor:(id)arg1 inView:(id)arg2;

@end

