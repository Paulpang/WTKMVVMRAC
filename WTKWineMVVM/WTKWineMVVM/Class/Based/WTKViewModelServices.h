//
//  WTKViewModelServices.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/9/14.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WTKBasedViewModel;
@protocol WTKViewModelServices <NSObject>

- (void)pushViewModel:(WTKBasedViewModel *)viewModel animated:(BOOL)animated;

@end