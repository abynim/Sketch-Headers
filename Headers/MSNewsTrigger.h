#import "CHSingletonObject.h"

@class NSURLSession, NSWindowController;

@interface MSNewsTrigger : CHSingletonObject
{
    NSURLSession *_urlSession;
    NSWindowController *_windowController;
}

+ (void)checkForNews;
@property(retain, nonatomic) NSWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (void)showURL:(id)arg1 newsID:(id)arg2;
- (BOOL)shouldShowNewsWithID:(id)arg1;
- (void)validateResult:(id)arg1;
- (void)checkForNews;
- (id)url;
- (id)init;

@end

