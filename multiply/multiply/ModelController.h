//
//  ModelController.h
//  multiply
//
//  Created by Mudduluri, Balaji on 6/2/15.
//  Copyright (c) 2015 Mudduluri, Balaji. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

