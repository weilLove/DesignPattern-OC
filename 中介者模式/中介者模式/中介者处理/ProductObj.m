//
//  ProductObj.m
//  中介者模式
//
//  Created by weil on 2019/1/10.
//  Copyright © 2019 allyoga. All rights reserved.
//

#import "ProductObj.h"

@implementation ProductObj
- (void)setObjMessage:(NSString *)message {
    NSString *msg = [NSString stringWithFormat:@"有了新需求：%@",message];
    [super setObjMessage:msg];
}

@end
