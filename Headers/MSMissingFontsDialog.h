#import "NSWindowController.h"

#import "NSTableViewDataSource.h"

@class NSArray, NSString, NSTableView, NSWindow;

@interface MSMissingFontsDialog : NSWindowController <NSTableViewDataSource>
{
    NSWindow *panel;
    NSTableView *tableView;
    BOOL openDocumentAnyway;
    NSArray *_missingFonts;
}

@property(copy, nonatomic) NSArray *missingFonts; // @synthesize missingFonts=_missingFonts;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close:(id)arg1;
- (void)openAnyway:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)runPanelWithMissingFonts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

