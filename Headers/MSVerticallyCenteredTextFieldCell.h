#import "NSTextFieldCell.h"

@interface MSVerticallyCenteredTextFieldCell : NSTextFieldCell
{
}

- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGRect)rectForTextDrawing:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

