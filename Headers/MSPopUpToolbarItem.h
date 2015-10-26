#import "NSToolbarItem.h"

@class NSImage, NSMenu;

@interface MSPopUpToolbarItem : NSToolbarItem
{
    NSImage *_smallImage;
    NSImage *_normalImage;
}

@property(retain, nonatomic) NSImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSImage *smallImage; // @synthesize smallImage=_smallImage;
- (void).cxx_destruct;
- (void)validate;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)target;
- (SEL)action;
- (void)setAction:(SEL)arg1;
@property(nonatomic) __weak id <MSPopToolbarItemActionObject> actionObject; // @dynamic actionObject;
- (void)setTarget:(id)arg1;
@property(retain, nonatomic) NSMenu *menu; // @dynamic menu;
- (id)popupCell;
- (id)menuButtonWithSize:(unsigned long long)arg1;
- (id)initWithItemIdentifier:(id)arg1 size:(unsigned long long)arg2;

@end

