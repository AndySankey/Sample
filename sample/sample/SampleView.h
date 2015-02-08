//
//  SampleView.h
//  sample
//
//  Created by Andrew Sankey on 08/02/2015.
//  Copyright (c) 2015 sample. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SampleView : UIView

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *sampleLabels;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *sampleButtons;


@end
