//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

struct _TYPEDEF_regmatch_t {
    int32_t e0;
    int32_t e1;
};

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int64_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1000(void);
int64_t function_1004(void);
int64_t function_8b8(void);
int32_t function_8e0(char * s);
void function_8f0(struct re_pattern_buffer * preg);
void function_900(void);
int32_t function_910(char * command);
int32_t function_920(struct re_pattern_buffer * preg, char * pattern, int32_t cflags);
char * function_930(char * s, int32_t n, struct _IO_FILE * stream);
int32_t function_940(char * s, char * format, ...);
int32_t function_950(struct re_pattern_buffer * preg, char * string, int32_t nmatch, struct _TYPEDEF_regmatch_t pmatch[1], int32_t eflags);
int64_t * function_960(char * dest, char * src, int32_t len, int32_t dstlen);
int32_t function_970(int32_t flag, char * format, ...);
void function_980(int32_t status);
int32_t function_990(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s);
int32_t function_9a0(char * s, int32_t flag, int32_t slen, char * format, ...);
void function_9b0(int64_t * d);
int64_t function_9f0(void);
int64_t function_a30(void);
int64_t function_a80(void);
int64_t function_ac0(void);
int64_t function_aca(void);
int64_t function_dea(int64_t a1);
int64_t function_e75(int64_t a1, int64_t a2);

// --------------------- Global Variables ---------------------

int64_t g1 = 2752; // 0x201d58
int64_t g2 = 2688; // 0x201d60
int32_t g3 = 0; // 0x20292f
int32_t g4 = 0; // 0x202933
int32_t g5 = 255; // 0x2029e4
char * g6[2] = {
    "^[0-9]\\{1,3\\}\\.[0-9]\\{1,3\\}\\.[0-9]\\{1,3\\}\\.[0-9]\\{1,3\\}$",
    "hacker"
}; // 0x202a00
struct _IO_FILE * g7 = NULL; // 0x202a20
struct _IO_FILE * g8 = NULL; // 0x202a40
char g9 = 0; // 0x202a48
struct re_pattern_buffer * g10 = NULL; // 0x202a60
int64_t g11 = 0; // 0x202aa0
char * g12; // 0x202ac0
int32_t g13;

// ------------------------ Functions -------------------------

// Address range: 0x8b8 - 0x8cf
int64_t function_8b8(void) {
    int64_t result = 0; // 0x8c6
    if (*(int64_t *)0x201fe8 != 0) {
        // 0x8c8
        __gmon_start__();
        result = &g13;
    }
    // 0x8ca
    return result;
}

// Address range: 0x8e0 - 0x8e6
int32_t function_8e0(char * s) {
    // 0x8e0
    return puts(s);
}

// Address range: 0x8f0 - 0x8f6
void function_8f0(struct re_pattern_buffer * preg) {
    // 0x8f0
    regfree(preg);
}

// Address range: 0x900 - 0x906
void function_900(void) {
    // 0x900
    __stack_chk_fail();
}

// Address range: 0x910 - 0x916
int32_t function_910(char * command) {
    // 0x910
    return system(command);
}

// Address range: 0x920 - 0x926
int32_t function_920(struct re_pattern_buffer * preg, char * pattern, int32_t cflags) {
    // 0x920
    return regcomp(preg, pattern, cflags);
}

// Address range: 0x930 - 0x936
char * function_930(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x930
    return fgets(s, n, stream);
}

// Address range: 0x940 - 0x946
int32_t function_940(char * s, char * format, ...) {
    // 0x940
    return sscanf(s, format);
}

// Address range: 0x950 - 0x956
int32_t function_950(struct re_pattern_buffer * preg, char * string, int32_t nmatch, struct _TYPEDEF_regmatch_t pmatch[1], int32_t eflags) {
    // 0x950
    return regexec(preg, string, nmatch, pmatch, eflags);
}

// Address range: 0x960 - 0x966
int64_t * function_960(char * dest, char * src, int32_t len, int32_t dstlen) {
    // 0x960
    return __strncpy_chk(dest, src, len, dstlen);
}

// Address range: 0x970 - 0x976
int32_t function_970(int32_t flag, char * format, ...) {
    // 0x970
    return __printf_chk(flag, format);
}

// Address range: 0x980 - 0x986
void function_980(int32_t status) {
    // 0x980
    exit(status);
}

// Address range: 0x990 - 0x996
int32_t function_990(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s) {
    // 0x990
    return fwrite(ptr, size, n, s);
}

// Address range: 0x9a0 - 0x9a6
int32_t function_9a0(char * s, int32_t flag, int32_t slen, char * format, ...) {
    // 0x9a0
    return __sprintf_chk(s, flag, slen, format);
}

// Address range: 0x9b0 - 0x9b6
void function_9b0(int64_t * d) {
    // 0x9b0
    __cxa_finalize(d);
}

// Address range: 0x9c0 - 0x9eb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9c0
    int64_t v1; // 0x9c0
    __libc_start_main(3701, (int32_t)a4, (char **)&v1, (void (*)())3984, (void (*)())0x1000, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x9f0 - 0xa22
int64_t function_9f0(void) {
    // 0x9f0
    return 0x202a10;
}

// Address range: 0xa30 - 0xa72
int64_t function_a30(void) {
    // 0xa30
    return 0;
}

// Address range: 0xa80 - 0xaba
int64_t function_a80(void) {
    // 0xa80
    if (g9 != 0) {
        // 0xab8
        int64_t result; // 0xa80
        return result;
    }
    // 0xa89
    if (*(int64_t *)0x201ff8 != 0) {
        // 0xa97
        __cxa_finalize((int64_t *)*(int64_t *)0x202008);
    }
    int64_t result2 = function_9f0(); // 0xaa3
    g9 = 1;
    return result2;
}

// Address range: 0xac0 - 0xaca
int64_t function_ac0(void) {
    // 0xac0
    return function_a30();
}

// Address range: 0xaca - 0xdea
int64_t function_aca(void) {
    // 0xaca
    int32_t v1; // bp-120, 0xaca
    int64_t v2 = &v1; // 0xacb
    int64_t v3 = __readfsqword(40); // 0xacf
    __printf_chk(1, "Enter key for faze 1: ");
    fgets((char *)&g12, 100, g7);
    sscanf((char *)&g12, "%s", &v1);
    bool v4; // 0xaca
    int64_t v5 = v4 ? -1 : 1;
    int64_t v6 = -1; // 0xb35
    int64_t v7 = v2; // 0xb35
    int64_t v8 = 0; // 0xb35
    while (v6 != 0) {
        int64_t v9 = v7;
        v6--;
        v7 = v9 + v5;
        v8 = v6;
        if (*(char *)v9 == 0) {
            // break ->
            break;
        }
        v8 = 0;
    }
    *(char *)(v2 - 1 + -1 - v8) = 0;
    int64_t result = 0; // 0xb5b
    char v10; // 0xaca
    char v11; // 0xaca
    if (v10 == 0 == v11 == 37 && 0x1000000 * v1 / 0x1000000 == (int32_t)&g4) {
        // 0xb88
        result = 0;
        char v12; // 0xaca
        int32_t v13; // 0xaca
        if (v12 == 54 == 0x1000000 * v13 / 0x1000000 == (int32_t)&g3) {
            int16_t v14 = *(int16_t *)&g5; // 0xb42
            int32_t v15; // 0xaca
            result = 0x1000000 * v15 / 0x1000000 == (int32_t)v14 - 220;
        }
    }
    int64_t v16 = 0; // 0xb78
    int64_t v17 = v2; // 0xbc6
    int64_t v18 = -1;
    int64_t v19 = 0; // 0xbc6
    int64_t v20; // 0xaca
    int64_t v21; // 0xbc6
    while (v18 != 0) {
        v20 = v17;
        v21 = v18 - 1;
        v17 = v20 + v5;
        v19 = v21;
        if (*(char *)v20 == 0) {
            // break ->
            break;
        }
        v18 = v21;
        v19 = 0;
    }
    while (-2 - v19 > v16) {
        char v22 = *(char *)(v16 + v2); // 0xbb4
        *(char *)(v16 + (int64_t)"password1234567") = v22;
        v16++;
        v17 = v2;
        v18 = -1;
        v19 = 0;
        while (v18 != 0) {
            v20 = v17;
            v21 = v18 - 1;
            v17 = v20 + v5;
            v19 = v21;
            if (*(char *)v20 == 0) {
                // break ->
                break;
            }
            v18 = v21;
            v19 = 0;
        }
    }
    // 0xbd4
    if (v3 == __readfsqword(40)) {
        // 0xbe8
        return result;
    }
    // 0xbee
    __stack_chk_fail();
    int64_t v23; // bp-240, 0xaca
    int64_t v24 = &v23; // 0xbf4
    int64_t v25 = __readfsqword(40); // 0xbf8
    __printf_chk(1, "Enter key for faze 2: ");
    fgets((char *)&g12, 100, g7);
    sscanf((char *)&g12, "%s", &v23);
    int64_t v26 = -1; // 0xc61
    int64_t v27 = v24; // 0xc61
    int64_t v28 = 0; // 0xc61
    while (v26 != 0) {
        int64_t v29 = v27;
        v26--;
        v27 = v29 + v5;
        v28 = v26;
        if (*(char *)v29 == 0) {
            // break ->
            break;
        }
        v28 = 0;
    }
    *(char *)(v24 - 1 + -1 - v28) = 0;
    int64_t v30 = -1; // 0xc71
    int64_t v31 = v24; // 0xc71
    int64_t v32 = 0; // 0xc71
    while (v30 != 0) {
        int64_t v33 = v31;
        v30--;
        v31 = v33 + v5;
        v32 = v30;
        if (*(char *)v33 == 0) {
            // break ->
            break;
        }
        v32 = 0;
    }
    int64_t v34 = -2 - v32; // 0xc79
    int64_t v35 = 0; // 0xc96
    int64_t v36 = v24; // 0xc96
    int64_t v37 = 0; // 0xc96
    if (v34 != 0) {
        v35 = v35 + (int64_t)*(char *)v36 & 0xffffffff;
        v36++;
        v37 = v35;
        while (v36 != v34 + v24) {
            // 0xc8a
            v35 = v35 + (int64_t)*(char *)v36 & 0xffffffff;
            v36++;
            v37 = v35;
        }
    }
    int64_t v38 = 0x100000000 * v37;
    __strncpy_chk("ord1234567", (char *)(10 * (v38 / 0x100000000 + v38 / 0x40000000) + (int64_t)"HC,j."), (int32_t)v34, 11);
    if (v25 == __readfsqword(40)) {
        // 0xcd2
        return v37 + 23 & 0xffffffff;
    }
    // 0xcd8
    __stack_chk_fail();
    int64_t v39 = __readfsqword(40); // 0xce1
    __printf_chk(1, "Enter key for faze 3: ");
    fgets((char *)&g12, 100, g7);
    int64_t v40; // bp-260, 0xaca
    int64_t v41; // bp-264, 0xaca
    int64_t v42; // bp-268, 0xaca
    int64_t v43; // bp-272, 0xaca
    sscanf((char *)&g12, "%d %d %d %d", &v43, &v42, &v41, &v40);
    int64_t v44 = v43; // 0xd46
    v43 = 0xa00000000 * v44 / 0x100000000;
    int64_t v45 = v41; // 0xd53
    v41 = 0xa00000000 * v45 / 0x100000000;
    int64_t result2 = 0; // 0xd6e
    if (10 * (int32_t)v44 + (int32_t)v42 == 13) {
        // 0xd85
        result2 = 0;
        int64_t v46 = -1; // 0xd8c
        int64_t v47 = (int64_t)"MZjHU"; // 0xd8c
        if (10 * (int32_t)v45 + (int32_t)v40 == 37) {
            int64_t v48 = 0; // 0xd9f
            while (v46 != 0) {
                int64_t v49 = v47;
                int64_t v50 = v46 - 1; // 0xd9f
                v46 = v50;
                v47 = v49 + v5;
                v48 = v50;
                if (*(char *)v49 == 0) {
                    // break ->
                    break;
                }
                v48 = 0;
            }
            __strncpy_chk("34567", "MZjHU", -2 - (int32_t)v48, 6);
            result2 = 1;
        }
    }
    int64_t v51 = __readfsqword(40) ^ v39; // 0xd75
    if (v51 == 0) {
        // 0xbe8
        return result2;
    }
    // 0xdc3
    __stack_chk_fail();
    int64_t v52 = *(int64_t *)v51; // 0xdcc
    return __printf_chk(1, "USAGE:\n%s <ip_addr>\n\nip_addr:\tC2 server's IP address [\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}], e.g. 192.168.0.1\n\nDESCRIPTION:\n\tReport alive to C2 server.\n", (char *)v52);
}

// Address range: 0xdea - 0xe75
int64_t function_dea(int64_t a1) {
    int64_t regex = *(int64_t *)&g6; // 0xdf3
    int32_t v1 = regcomp((struct re_pattern_buffer *)&g10, (char *)regex, 0); // 0xe01
    *(int32_t *)&g11 = v1;
    if (v1 != 0) {
        // 0xe4e
        fwrite((int64_t *)"Could not compile regex\n", 1, 24, g8);
        exit(1);
        // UNREACHABLE
    }
    int64_t str = *(int64_t *)(a1 + 8); // 0xe10
    int32_t v2 = regexec((struct re_pattern_buffer *)&g10, (char *)str, 0, {
        (struct {int32_t e0; int32_t e1;}){
            .e0 = 0,
            .e1 = 0
        }
}, 0); // 0xe2b
    *(int32_t *)&g11 = v2;
    regfree((struct re_pattern_buffer *)&g10);
    return v2 != 0;
}

// Address range: 0xe75 - 0xff5
int64_t function_e75(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0xe7e
    if ((int32_t)a1 == 2) {
        // 0xebb
        if ((int32_t)function_dea(a2) == 0) {
            // 0xec7
            function_aca();
            puts("[-] Complete all 3 fazes to successfully report back alive.");
        }
    }
    // 0xe9b
    if (v1 == __readfsqword(40)) {
        // 0xeb4
        return 0;
    }
    // 0xf87
    __stack_chk_fail();
    int64_t result = function_8b8(); // 0xfbc
    if ((int64_t)&g2 - (int64_t)&g1 >> 3 == 0) {
        // 0xeb4
        return result;
    }
    int64_t v2 = 0; // 0xfc4
    while (v2 + 1 != (int64_t)&g2 - (int64_t)&g1 >> 3) {
        // 0xfd0
        v2++;
    }
    // 0xeb4
    return result;
}

// Address range: 0x1000 - 0x1002
int64_t function_1000(void) {
    // 0x1000
    int64_t result; // 0x1000
    return result;
}

// Address range: 0x1004 - 0x100d
int64_t function_1004(void) {
    // 0x1004
    int64_t result; // 0x1004
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// void __cxa_finalize(void * d);
// void __gmon_start__(void);
// int __libc_start_main(int *(main)(int, char **, char **), int argc, char ** ubp_av, void(* init)(void), void(* fini)(void), void(* rtld_fini)(void), void(* stack_end));
// int __printf_chk(int flag, const char * restrict format, ...);
// int __sprintf_chk(char * restrict s, int flag, size_t slen, const char * restrict format, ...);
// void __stack_chk_fail(void);
// void * __strncpy_chk(char * restrict dest, char * restrict src, size_t len, size_t dstlen);
// void exit(int status);
// char * fgets(char * restrict s, int n, FILE * restrict stream);
// size_t fwrite(const void * restrict ptr, size_t size, size_t n, FILE * restrict s);
// int puts(const char * s);
// int regcomp(regex_t * restrict preg, const char * restrict pattern, int cflags);
// int regexec(const regex_t * restrict preg, const char * restrict string, size_t nmatch, regmatch_t pmatch[__restrict_arr], int eflags);
// void regfree(regex_t * preg);
// int sscanf(const char * restrict s, const char * restrict format, ...);
// int system(const char * command);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.4.0)
// Detected functions: 25