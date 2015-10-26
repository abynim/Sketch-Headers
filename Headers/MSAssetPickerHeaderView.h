#import "NSView.h"

@class NSString;

@interface MSAssetPickerHeaderView : NSView
{
    id <MSAssetPickerHeaderViewDelegate> _delegate;
    NSString *_preferenceKey;
}

+ (id)headerPickerWithTitle:(id)arg1 isExpandedPreference:(id)arg2 delegate:(id)arg3;
@property(retain, nonatomic) NSString *preferenceKey; // @synthesize preferenceKey=_preferenceKey;
@property(nonatomic) __weak id <MSAssetPickerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)expandArrowWasClicked:(id)arg1;

@end

