//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorSpaceProvider-Protocol.h"

@class MSColor, MSColorPickerViewController;

@protocol MSColorPickerViewControllerDelegate <MSColorSpaceProvider>
- (void)subviewsChangedInColorPickerController:(MSColorPickerViewController *)arg1;
- (void)colorPickerController:(MSColorPickerViewController *)arg1 colorDidChange:(MSColor *)arg2;
@end

