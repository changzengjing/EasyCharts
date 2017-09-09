//
//  DrawBarCollectionView.h
//  DrawByCollectionView
//
//  Created by 宋永建 on 2017/6/9.
//  Copyright © 2017年 Global. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ECBarCollectionView : UICollectionView

+ (instancetype)collectionView;
- (void)reset:(NSInteger)cellCount;

@end


@interface ECBarCollectionViewFlowLayout :UICollectionViewFlowLayout

@end
