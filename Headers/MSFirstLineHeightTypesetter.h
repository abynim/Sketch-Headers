#import "NSATSTypesetter.h"

@interface MSFirstLineHeightTypesetter : NSATSTypesetter
{
    double _forcedBaselineOffset;
    id <MSFirstLineTypesetterDelegate> _delegate;
}

@property(nonatomic) __weak id <MSFirstLineTypesetterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double forcedBaselineOffset; // @synthesize forcedBaselineOffset=_forcedBaselineOffset;
- (void).cxx_destruct;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;

@end

