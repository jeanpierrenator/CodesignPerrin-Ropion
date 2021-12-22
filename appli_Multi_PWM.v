module appli_Multi_PWM(CLOCK_50,KEY, SW,DRAM_ADDR,DRAM_BA,DRAM_CAS_N,DRAM_CKE,DRAM_CS_N,DRAM_DQ,DRAM_DQM,DRAM_RAS_N,DRAM_WE_N,DRAM_CLK, LCD_RS, LCD_EN, LCD_RW, LCD_DATA,GPIO,LEDG,LEDR);


input CLOCK_50;
input[3:0] KEY;
input[3:0] SW;

output[12:0] DRAM_ADDR;
output[1:0] DRAM_BA;
output DRAM_CAS_N;
output DRAM_CKE;
output DRAM_CS_N;
output[3:0] DRAM_DQM;
output	DRAM_RAS_N;
output DRAM_WE_N;
output DRAM_CLK;
output LCD_EN;
output LCD_RS;
output LCD_RW;
output [7:2]LEDG;
output [17:0]LEDR;
output[24 : 0] GPIO;

wire Pwm_CLK;
wire [10:0] Ton;
wire [24:0] Latch;
wire [24:0] Oe;


inout[31:0] DRAM_DQ;
inout [7:0] LCD_DATA;



    appli_Multi_PWM_sys u0 (
          .clk_clk               (CLOCK_50),               //             clk.clk
        .reset_reset_n         (KEY[0]),         //           reset.reset_n
        .sdram_ctrl_wire_addr  (DRAM_ADDR),  // sdram_ctrl_wire.addr
        .sdram_ctrl_wire_ba    (DRAM_BA),    //                .ba
        .sdram_ctrl_wire_cas_n (DRAM_CAS_N), //                .cas_n
        .sdram_ctrl_wire_cke   (DRAM_CKE),   //                .cke
        .sdram_ctrl_wire_cs_n  (DRAM_CS_N),  //                .cs_n
        .sdram_ctrl_wire_dq    (DRAM_DQ),    //                .dq
        .sdram_ctrl_wire_dqm   (DRAM_DQM),   //                .dqm
        .sdram_ctrl_wire_ras_n (DRAM_RAS_N), //                .ras_n
        .sdram_ctrl_wire_we_n  (DRAM_WE_N),  //                .we_n
        .sdram_clk_clk         (DRAM_CLK),          //       sdram_clk.clk
		  .lcd_16207_RS          (LCD_RS),          //       lcd_16207.RS
        .lcd_16207_RW          (LCD_RW),          //                .RW
        .lcd_16207_data        (LCD_DATA),        //                .data
        .lcd_16207_E           (LCD_EN),            //                .E
		  .switch_export         (SW[3:0]),          //          switch.export
		  .button_export         (KEY[3:1]),          //          button.export
			.multi_pwm_clk_clk     (Pwm_CLK),     //   multi_pwm_clk.clk
        .pwm_ton_export        (Ton),        //         pwm_ton.export
        .pwm_latch_export      (Latch),      //       pwm_latch.export
        .pwm_onoff_export      (Oe)       //       pwm_onoff.export
    );
	 
	 	 
modMultiPWM #(24,10)(Pwm_CLK,GPIO[24:0],Latch,Ton,Oe); // instance de modMultiPWM

assign {LEDR[17:0],LEDG[7:2]} = Oe; // on assign OE au led 


endmodule
