#import "NSATSTypesetter.h"

@interface MSFirstLineHeightTypesetter : NSATSTypesetter
{
    double _forcedBaselineOffset;
    id <MSFirstLineTypesetterDelegate> _delegate;
}

@property(nonatomic) __weak id <MSFirstLineTypesetterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double forcedBaselineOffset; // @synthesize forcedBaselineOffset=_forcedBaselineOffset;
- (void).cxx_destruct;
- (void)willSetLineFragmentRect:(struct CGRect *)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect *)arg3 baselineOffset:(double *)arg4;

@end

