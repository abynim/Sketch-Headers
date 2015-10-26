#import "NSString.h"

@interface NSString (CHStringAdditions)
- (long long)fontSizeToFitStringWithAttributes:(id)arg1 inSize:(struct CGSize)arg2 maximumFontSize:(long long)arg3;
- (void)fitStringAttributes:(id)arg1 inHeight:(long long)arg2;
- (void)fitStringAttributes:(id)arg1 inWidth:(long long)arg2;
- (void)fitStringAttributes:(id)arg1 inSize:(struct CGSize)arg2;
- (long long)fontSizeToFitStringWithAttributes:(id)arg1 inHeight:(long long)arg2;
- (long long)fontSizeToFitStringWithAttributes:(id)arg1 inWidth:(long long)arg2;
- (long long)fontSizeToFitStringWithAttributes:(id)arg1 inSize:(struct CGSize)arg2;
- (double)heightWithFont:(id)arg1 maxWidth:(double)arg2;
@end

