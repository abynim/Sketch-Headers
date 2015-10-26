#import "NSSearchField.h"

#import "NSTextViewDelegate.h"

@class NSString, NSTableView;

@interface BCFontSearchField : NSSearchField <NSTextViewDelegate>
{
    NSTableView *_searchResults;
}

@property(nonatomic) __weak NSTableView *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)moveFocusToTableView;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

