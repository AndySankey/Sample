//
//  AlertGroupView.h
//  Watchie
//
//  Created by Andrew Sankey on 05/02/2015.
//  Copyright (c) 2015 Andrew Sankey. All rights reserved.
//

#import "ProfileView.h"

@interface AlertGroupView : ProfileView

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *carerGroupLabels;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *carerGroupButtons;

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *responderGroupLabels;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *responderGroupButtons;

@end
