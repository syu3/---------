//
//  ViewController.h
//  お絵描きツイッター
//
//  Created by 加藤 周 on 2014/07/13.
//  Copyright (c) 2014年 mycompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Social/Social.h>
#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
@interface ViewController : UIViewController{
    UIImageView *canvas;
    CGPoint touchPoint;
    UIImage*capure;

    int rgb;
    //↓イラスト選択画面↓
    IBOutlet UIImageView*nurie;

}
-(IBAction)red;
-(IBAction)green;
-(IBAction)blue;
-(IBAction)yellow;
-(IBAction)black;
-(IBAction)white;
-(IBAction)shou;
-(IBAction)dai;
@end
