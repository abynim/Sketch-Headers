#import "MSPopoverAction.h"

#import "MSPublisherViewControllerDelegate.h"

@class MSPublisherViewController, NSImage, NSString;

@interface MSPublishAction : MSPopoverAction <MSPublisherViewControllerDelegate>
{
    MSPublisherViewController *_viewController;
    NSImage *_smallOnImage;
    NSImage *_smallOffImage;
    NSImage *_normalOnImage;
    NSImage *_normalOffImage;
}

@property(retain, nonatomic) NSImage *normalOffImage; // @synthesize normalOffImage=_normalOffImage;
@property(retain, nonatomic) NSImage *normalOnImage; // @synthesize normalOnImage=_normalOnImage;
@property(retain, nonatomic) NSImage *smallOffImage; // @synthesize smallOffImage=_smallOffImage;
@property(retain, nonatomic) NSImage *smallOnImage; // @synthesize smallOnImage=_smallOnImage;
@property(retain, nonatomic) MSPublisherViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)label;
- (BOOL)isLocalServerOnline;
- (id)smallImage;
- (id)image;
- (void)updateToolbarItemButton;
- (void)publishViewController:(id)arg1 localServerIsPublished:(BOOL)arg2;
- (id)progressImagesWithSuffix:(id)arg1;
- (void)ensureProgressImagesLoaded;
- (void)publishViewController:(id)arg1 didProgressUpdateTo:(double)arg2;
- (id)popoverViewController;
- (id)localServer;
- (BOOL)validate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

