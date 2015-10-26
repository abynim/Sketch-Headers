#import "NSWindowController.h"

@class NSButton, NSString, NSURL, WebView;

@interface MSNewsTriggerWindowController : NSWindowController
{
    BOOL _finishedLoadingData;
    NSURL *_url;
    NSString *_newsID;
    WebView *_webView;
    NSButton *_dontShowAgainButton;
}

@property(nonatomic) BOOL finishedLoadingData; // @synthesize finishedLoadingData=_finishedLoadingData;
@property(nonatomic) NSButton *dontShowAgainButton; // @synthesize dontShowAgainButton=_dontShowAgainButton;
@property(nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *newsID; // @synthesize newsID=_newsID;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)dontShowNewsWithIDAnymore:(id)arg1;
- (void)close:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1 newsID:(id)arg2;

@end

