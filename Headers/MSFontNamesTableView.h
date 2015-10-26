#import "NSTableView.h"

@class NSSearchField;

@interface MSFontNamesTableView : NSTableView
{
    NSSearchField *_searchField;
}

@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;

@end

