#import "CHViewController.h"

#import "MSSourceListViewDelegate.h"

@class MSDocument, MSSidebarViewController, MSSourceListView, NSMenuItem, NSString;

@interface MSPagesListViewController : CHViewController <MSSourceListViewDelegate>
{
    BOOL ignoreNextSelectionChangeNotification;
    BOOL ignoreNextDocumentSelectionNotification;
    BOOL ignoreTableViewSelectionDidChangeNotifications;
    MSDocument *_document;
    MSSidebarViewController *_sidebarViewController;
    MSSourceListView *_listView;
    NSMenuItem *_deletePageMenuItem;
    NSMenuItem *_separatorMenuItem;
}

@property(retain, nonatomic) NSMenuItem *separatorMenuItem; // @synthesize separatorMenuItem=_separatorMenuItem;
@property(retain, nonatomic) NSMenuItem *deletePageMenuItem; // @synthesize deletePageMenuItem=_deletePageMenuItem;
@property(retain, nonatomic) MSSourceListView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak MSSidebarViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deletePage:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)duplicatePage:(id)arg1;
- (id)listView:(id)arg1 menuForEvent:(id)arg2;
- (void)undoNotification:(id)arg1;
- (void)refreshCanvas;
- (id)pageWithID:(id)arg1;
- (void)popoverCell:(id)arg1 deletePageWithID:(id)arg2;
- (BOOL)popoverCell:(id)arg1 canDeletePageWithID:(id)arg2;
- (void)addPage:(id)arg1;
- (BOOL)acceptPageDrop:(id)arg1 row:(unsigned long long)arg2 dropHighlight:(unsigned long long)arg3;
- (BOOL)acceptLayerDrop:(id)arg1 row:(unsigned long long)arg2 dropHighlight:(unsigned long long)arg3;
- (BOOL)listView:(id)arg1 acceptDrop:(id)arg2 row:(unsigned long long)arg3 dropHighlight:(unsigned long long)arg4;
- (unsigned long long)listView:(id)arg1 validateDrop:(id)arg2 proposedRow:(unsigned long long)arg3 proposedDropHighlight:(unsigned long long)arg4;
- (BOOL)listView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)listViewSelectionDidChange:(id)arg1;
- (id)listView:(id)arg1 actualSelectionIndexes:(id)arg2;
- (id)listView:(id)arg1 cellForRow:(unsigned long long)arg2;
- (double)listView:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInListView:(id)arg1;
- (id)pageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (unsigned long long)currentPageIndex;
- (void)scrollToCurrentPage;
- (void)reloadData;
- (void)prepareForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

