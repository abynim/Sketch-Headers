//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHWindowController.h>

@interface _TtC6Sketch25DocumentsWindowController : CHWindowController
{
    // Error parsing type: , name: startSpaceToolbarItem
    // Error parsing type: , name: newDocumentToolbarItem
    // Error parsing type: , name: windowNameToolbarItem
    // Error parsing type: , name: searchFieldToolbarItem
    // Error parsing type: , name: changeViewToolbarItem
    // Error parsing type: , name: sourcesViewController
    // Error parsing type: , name: documentsViewController
    // Error parsing type: , name: cloudIntroViewController
    // Error parsing type: , name: workspaceUnavailableViewController
    // Error parsing type: , name: pendingUploads
    // Error parsing type: , name: currentSource
}

+ (void)clearRecentItemsCache;
+ (BOOL)hideWindowIfNeeded;
+ (BOOL)hasKeyWindow;
+ (void)showWindowSelectingShare:(id)arg1;
+ (void)showWindowWithCollection:(long long)arg1;
+ (void)showWindow;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)copyLinkToCloudDocument:(id)arg1;
- (void)revealDocumentInCloud:(id)arg1;
- (void)revealDocumentInFinder:(id)arg1;
- (void)newCloudDocument:(id)arg1;
- (void)newDocument:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (void)viewTypeChangedWithSender:(id)arg1;

@end

