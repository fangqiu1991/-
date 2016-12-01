//
//  YJCommentHeaderView.h
//  BaiSi
//
//  Created by 高方秋 on 2016/10/6.
//  Copyright © 2016年 ly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJCommentHeaderView : UITableViewHeaderFooterView

/** 文字数据*/
@property (nonatomic, copy) NSString *title;

+ (instancetype)headerViewTableView:(UITableView *)tableView;


@end
