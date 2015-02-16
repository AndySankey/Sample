//
//  ProfileView.h
//  Watchie
//
//  Created by Andrew Sankey on 16/01/2015.
//  Copyright (c) 2015 Andrew Sankey. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ProfileViewDelegate;

@interface ProfileView : UIView

@property (nonatomic, assign) id<ProfileViewDelegate> delegate;

- (CGFloat)getHeight;

@end

@protocol ProfileViewDelegate <NSObject, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@required
- (void)openSafezoneEditor:(NSDictionary*)safezone;
- (void)openCameraForPhoto;
- (void)openGalleryForPhoto;

@optional
- (void)openUserSearch:(NSMutableDictionary*)params;

@end
