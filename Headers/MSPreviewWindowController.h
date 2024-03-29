//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "MSMirrorWindowControllerContent-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class MSColorView, MSDocumentData, MSImmutableArtboardGroup, MSImmutableDocumentData, MSMirrorDataProvider, MSSharePrototypeController, NSArray, NSButton, NSPopUpButton, NSProgressIndicator, NSString, NSToolbarItem, NSURL, WKWebView;

@interface MSPreviewWindowController : NSWindowController <MSMirrorWindowControllerContent, NSWindowDelegate, WKNavigationDelegate, WKScriptMessageHandler, NSToolbarDelegate, NSSharingServicePickerDelegate>
{
    NSToolbarItem *_artboardToolbarItem;
    NSPopUpButton *_artboardButton;
    NSToolbarItem *_startpointToolbarItem;
    NSButton *_startpointButton;
    NSButton *_backButton;
    NSToolbarItem *_backToolbarItem;
    NSToolbarItem *_shareToolbarItem;
    NSProgressIndicator *_shareProgressIndicator;
    NSButton *_shareButton;
    MSColorView *_backgroundView;
    WKWebView *_webView;
    MSSharePrototypeController *_shareController;
}

+ (void)close;
+ (void)show;
+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) MSSharePrototypeController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) MSColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSProgressIndicator *shareProgressIndicator; // @synthesize shareProgressIndicator=_shareProgressIndicator;
@property(retain, nonatomic) NSToolbarItem *shareToolbarItem; // @synthesize shareToolbarItem=_shareToolbarItem;
@property(retain, nonatomic) NSToolbarItem *backToolbarItem; // @synthesize backToolbarItem=_backToolbarItem;
@property(retain, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSButton *startpointButton; // @synthesize startpointButton=_startpointButton;
@property(retain, nonatomic) NSToolbarItem *startpointToolbarItem; // @synthesize startpointToolbarItem=_startpointToolbarItem;
@property(retain, nonatomic) NSPopUpButton *artboardButton; // @synthesize artboardButton=_artboardButton;
@property(retain, nonatomic) NSToolbarItem *artboardToolbarItem; // @synthesize artboardToolbarItem=_artboardToolbarItem;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)scrollWheel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)relayResponderAction:(SEL)arg1 with:(id)arg2;
- (void)showContextualMenuWithEvent:(id)arg1;
- (void)goWithTheFlow:(id)arg1;
- (void)goBack:(id)arg1;
- (void)showSharingServicePickerWithLink:(id)arg1;
- (void)sharePrototype:(id)arg1;
- (void)toggleFlowHome:(id)arg1;
- (void)openStartpoint:(id)arg1;
- (id)startpointsMenuShowingArtboardID:(id)arg1;
- (id)startpointsMenu;
- (id)menuItemForArtboard:(id)arg1 shownArtboard:(id)arg2;
- (void)selectArtboardMenuItem:(id)arg1 shownArtboard:(id)arg2;
- (void)updateBackButtonEnabled;
- (void)updateArtboardButtonShowingArtboard:(id)arg1;
- (void)updateArtboardButtonShowingArtboardID:(id)arg1;
- (void)currentArtboardDidChangeNotification:(id)arg1;
- (void)documentDidUpdateNotification:(id)arg1;
- (void)documentDidChangeNotification:(id)arg1;
- (id)urlRequest;
- (void)localizeFrontend;
- (void)whitelistClientID;
- (void)startLoading;
@property(readonly, nonatomic) NSURL *currentURL;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) struct CGRect fittingWindowFrame;
@property(readonly, nonatomic) struct CGRect viewPort; // @dynamic viewPort;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (void)loadWindow;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;
- (void)transitionToArtboardID:(id)arg1 animatedBy:(long long)arg2;
- (void)changeVisibleArtboardID:(id)arg1;
@property(readonly, nonatomic) MSImmutableArtboardGroup *currentStartpoint;
- (id)sortedArtboards:(id)arg1;
@property(readonly, nonatomic) NSArray *startpoints;
@property(readonly, nonatomic) NSString *firstArtboardID;
@property(readonly, nonatomic) NSString *defaultArtboardID;
@property(readonly, nonatomic) NSString *visibleArtboardID;
@property(readonly, nonatomic) NSString *currentArtboardID;
@property(readonly, nonatomic) MSDocumentData *currentMutableDocument;
@property(readonly, nonatomic) MSImmutableDocumentData *currentDocument;
@property(readonly, nonatomic) MSMirrorDataProvider *dataProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

